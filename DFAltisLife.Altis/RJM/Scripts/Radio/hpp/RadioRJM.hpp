/*

    Author: Medeiros
	Edits: RobérioJR

*/
class RadioRJM
{
	idd = 10100;
	name= "RadioRJM";
	
	class ControlsBackground {
		class Radio {
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.24511719;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.50976563;
			h = safeZoneH * 0.28125;
			style = 48;
			text = "RJM\Scripts\Radio\img\fundo.jpg";
			colorBackground[] = {};
			colorText[] = {};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			access = 0;
		};
	};
	class Controls {
		class msc6 {
			type = 1;
			idc = 10106;
			x = safeZoneX + safeZoneW * 0.59082032;
			y = safeZoneY + safeZoneH * 0.684;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class msc5 {
			type = 1;
			idc = 10105;
			x = safeZoneX + safeZoneW * 0.5546875;
			y = safeZoneY + safeZoneH * 0.684;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class msc4 {
			type = 1;
			idc = 10104;
			x = safeZoneX + safeZoneW * 0.52050782;
			y = safeZoneY + safeZoneH * 0.684;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class msc3 {
			type = 1;
			idc = 10103;
			x = safeZoneX + safeZoneW * 0.48925782;
			y = safeZoneY + safeZoneH * 0.684;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class msc2 {
			type = 1;
			idc = 10102;
			x = safeZoneX + safeZoneW * 0.44921875;
			y = safeZoneY + safeZoneH * 0.684;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class msc1 {
			type = 1;
			idc = 10101;
			x = safeZoneX + safeZoneW * 0.41601563;
			y = safeZoneY + safeZoneH * 0.684;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class Avancar {
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.65917969;
			y = safeZoneY + safeZoneH * 0.61;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class Voltar {
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.62402344;
			y = safeZoneY + safeZoneH * 0.61;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class MaisVolume {
			type = 1;
			idc = 10101234;
			x = safeZoneX + safeZoneW * 0.336;
			y = safeZoneY + safeZoneH * 0.56597223;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.08680556;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class MenosVolume {
			type = 1;
			idc = 10101235;
			x = safeZoneX + safeZoneW * 0.305;
			y = safeZoneY + safeZoneH * 0.56597223;
			w = safeZoneW * 0.02148438;
			h = safeZoneH * 0.08680556;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class Pausar
		{
			type = 1;
			idc = 101011;
			x = safeZoneX + safeZoneW * 0.26953125;
			y = safeZoneY + safeZoneH * 0.682;
			w = safeZoneW * 0.04589844;
			h = safeZoneH * 0.01388889;
			style = 0+2;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW/safezoneH)min1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class Paredao {
			type = 1;
			idc = 101012;
			x = safeZoneX + safeZoneW * 0.685;
			y = safeZoneY + safeZoneH * 0.47;
			w = safeZoneW * 0.04589844;
			h = safeZoneH * 0.03819445;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.2157,0.1059,0.1255,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.7843,0.8941,0.8745,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class NomeMusica {
			type = 13;
			idc = 101013;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.59027778;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.03819445;
			style = 48;
			text = "Roberio CDs arrazando tudo";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 24) * 1.3);
			colorBackground[] = {1,1,1,0};
			tooltipColorText[] = {0.902,0.902,0.902,1};
		};
	};
};
