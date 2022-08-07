Shader "Custom/fluxyShader"
{
	Properties
	{
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Fluid Density (RGB)", 2D) = "white" {}
		_SurfaceAlbedo ("Surface Albedo (RGB)", 2D) = "white" {}
		_FluidGlossiness ("Fluid Smoothness", Range(0,1)) = 0.9
		_Glossiness ("Smoothness", Range(0,1)) = 0.5
		_Metallic ("Metallic", Range(0,1)) = 0.0
	}
	SubShader
	{
		Tags { "RenderType"="Opaque" }
		LOD 200

		CGPROGRAM
		// Physically based Standard lighting model, and enable shadows on all light types
		#pragma surface surf Standard fullforwardshadows

		// Use shader model 3.0 target, to get nicer looking lighting
		#pragma target 3.0

		#include "Assets/FluXY/Resources/Shaders/FluidUtils.hlsl"

		sampler2D _MainTex;
		sampler2D _SurfaceAlbedo;
		float4 _MainTex_TexelSize;

		struct Input
		{
			float2 uv_MainTex;
		};

		half _FluidGlossiness;
		half _Glossiness;
		half _Metallic;
		fixed4 _Color;

		// Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
		// See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
		// #pragma instancing_options assumeuniformscaling
		UNITY_INSTANCING_BUFFER_START(Props)
		// put more per-instance properties here
		UNITY_INSTANCING_BUFFER_END(Props)

		float3 NormalFromDensity(in float2 uv, in float scale)
		{
			float3 ts = float3(_MainTex_TexelSize.xy, 0);
			float2 uv0 = uv + ts.xz;
			float2 uv1 = uv + ts.zy;
			float h = tex2D(_MainTex, uv).a;
			float h0 = tex2D(_MainTex, uv0).a;
			float h1 = tex2D(_MainTex, uv1).a;

			float3 p0 = float3 (ts.xz, (h0 - h) * scale);
			float3 p1 = float3 (ts.zy, (h1 - h) * scale);

			return normalize (cross (p0, p1));
		}

		void surf (Input IN, inout SurfaceOutputStandard o)
		{
			// convert texture coordinates from tile to normalized uvs:
			float2 uv = TileToUV(IN.uv_MainTex,_TileIndex);

			// Albedo comes from a texture tinted by color
			fixed4 density = tex2D (_MainTex, uv);
			fixed4 surface = tex2D (_SurfaceAlbedo, IN.uv_MainTex) * _Color;

			o.Albedo = lerp(surface.rgb,density.rgb,density.a);
			o.Normal = NormalFromDensity(uv,0.005f);

			// Metallic and smoothness come from slider variables
			o.Metallic = _Metallic;
			o.Smoothness = lerp(_Glossiness,_FluidGlossiness,density.a);
			o.Alpha = surface.a;
		}
		ENDCG
	}
	FallBack "Diffuse"
}