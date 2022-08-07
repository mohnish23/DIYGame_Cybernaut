// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "ObjectSpaceGradient"
{
	Properties
	{
		_StartColor("Start Color", Color) = (1,1,1,1)
		_EndColor("End Color", Color) = (0,0,0,1)
		_Start("Start", Float) = 0
		_End("End", Float) = 0
		[KeywordEnum(X,Y,Z)] _Axis("Axis", Float) = 0
		_Smoothness("Smoothness", Range( 0 , 1)) = 0
		_Specular("Specular", Range( 0 , 1)) = 0
		_Emission("Emission", Range( 0 , 1)) = 0
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Opaque"  "Queue" = "Geometry+0" "IsEmissive" = "true"  }
		Cull Back
		CGPROGRAM
		#include "UnityShaderVariables.cginc"
		#pragma target 3.0
		#pragma shader_feature_local _AXIS_X _AXIS_Y _AXIS_Z
		#pragma surface surf StandardSpecular keepalpha addshadow fullforwardshadows 
		struct Input
		{
			float3 worldPos;
		};

		uniform float4 _StartColor;
		uniform float4 _EndColor;
		uniform float _Start;
		uniform float _End;
		uniform float _Emission;
		uniform float _Specular;
		uniform float _Smoothness;

		void surf( Input i , inout SurfaceOutputStandardSpecular o )
		{
			float3 ase_vertex3Pos = mul( unity_WorldToObject, float4( i.worldPos , 1 ) );
			#if defined(_AXIS_X)
				float staticSwitch6 = ase_vertex3Pos.x;
			#elif defined(_AXIS_Y)
				float staticSwitch6 = ase_vertex3Pos.y;
			#elif defined(_AXIS_Z)
				float staticSwitch6 = ase_vertex3Pos.z;
			#else
				float staticSwitch6 = ase_vertex3Pos.x;
			#endif
			float range17 = abs( ( _End - _Start ) );
			float4 lerpResult3 = lerp( _StartColor , _EndColor , saturate( ( ( staticSwitch6 - _Start ) / range17 ) ));
			o.Albedo = lerpResult3.rgb;
			o.Emission = ( lerpResult3 * _Emission ).rgb;
			float3 temp_cast_2 = (_Specular).xxx;
			o.Specular = temp_cast_2;
			o.Smoothness = _Smoothness;
			o.Alpha = 1;
		}

		ENDCG
	}
	Fallback "Diffuse"
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18909
0;6;1280;653;1883.59;471.6461;1.500699;True;False
Node;AmplifyShaderEditor.RangedFloatNode;14;-1751.645,508.5632;Inherit;False;Property;_End;End;3;0;Create;True;0;0;0;False;0;False;0;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;5;-1749.314,594.4503;Inherit;False;Property;_Start;Start;2;0;Create;True;0;0;0;False;0;False;0;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.PosVertexDataNode;4;-1742.677,328.8248;Inherit;False;0;0;5;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleSubtractOpNode;15;-1597.222,540.2167;Inherit;False;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.StaticSwitch;6;-1528.133,348.3288;Inherit;False;Property;_Axis;Axis;4;0;Create;True;0;0;0;False;0;False;0;0;0;True;;KeywordEnum;3;X;Y;Z;Create;True;True;9;1;FLOAT;0;False;0;FLOAT;0;False;2;FLOAT;0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT;0;False;7;FLOAT;0;False;8;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.AbsOpNode;16;-1448.506,538.2736;Inherit;False;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleSubtractOpNode;21;-1323.131,367.0704;Inherit;False;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.RegisterLocalVarNode;17;-1306.358,531.5162;Inherit;False;range;-1;True;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleDivideOpNode;18;-987.9324,424.2922;Inherit;False;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SaturateNode;26;-771.5714,241.9365;Inherit;False;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;2;-946.1403,-21.77513;Inherit;False;Property;_EndColor;End Color;1;0;Create;True;0;0;0;False;0;False;0,0,0,1;0,0,0,0;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ColorNode;1;-947.6408,-209.3134;Inherit;False;Property;_StartColor;Start Color;0;0;Create;True;0;0;0;False;0;False;1,1,1,1;0,0,0,0;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.LerpOp;3;-610.0714,-101.2913;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;24;-539.9413,99.28319;Inherit;False;Property;_Emission;Emission;7;0;Create;True;0;0;0;False;0;False;0;0;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;25;-236.8623,61.57285;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;22;-407.8162,265.7948;Inherit;False;Property;_Smoothness;Smoothness;5;0;Create;True;0;0;0;False;0;False;0;0;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;23;-407.8162,189.7948;Inherit;False;Property;_Specular;Specular;6;0;Create;True;0;0;0;False;0;False;0;0;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;1,-1;Float;False;True;-1;2;ASEMaterialInspector;0;0;StandardSpecular;ObjectSpaceGradient;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Opaque;0.5;True;True;0;False;Opaque;;Geometry;All;16;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;True;0;0;False;-1;0;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;Relative;0;;-1;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT3;0,0,0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;15;0;14;0
WireConnection;15;1;5;0
WireConnection;6;1;4;1
WireConnection;6;0;4;2
WireConnection;6;2;4;3
WireConnection;16;0;15;0
WireConnection;21;0;6;0
WireConnection;21;1;5;0
WireConnection;17;0;16;0
WireConnection;18;0;21;0
WireConnection;18;1;17;0
WireConnection;26;0;18;0
WireConnection;3;0;1;0
WireConnection;3;1;2;0
WireConnection;3;2;26;0
WireConnection;25;0;3;0
WireConnection;25;1;24;0
WireConnection;0;0;3;0
WireConnection;0;2;25;0
WireConnection;0;3;23;0
WireConnection;0;4;22;0
ASEEND*/
//CHKSM=94A265F1FF89663C640673279A95CF7E345B2CDD