class Templates {
    class Vanilla_Base; //import Vanilla_Base from A3A to use with defining a new vanilla template
    class WS_Base : Vanilla_Base
    {
        requiredAddons[] = {"Weapons_1_F_lxWS"};
        logo = "\lxWS\data_f_lxWS\Logos\arma3_lxws_logo_ca.paa";
        basepath = QPATHTOFOLDER(Templates\WS); //the path to the template folder
        priority = 5;
        forceDLC[] = {"ws"};
        climate[] = {"arid"};
    };
	class WS_NATO : WS_Base
	{
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "WS NATO Desert";
        file = "WS_AI_NATO_Desert";
	};
	class WS_CSAT : WS_Base
	{
        side = "Inv";
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "WS CSAT North Africa";
        file = "WS_AI_CSAT_NAfrica";
	};
	class WS_SIFA : WS_Base
	{
        side = "Occ";
        flagTexture = "\lxws\data_f_lxws\img\flags\flag_SFIA_CO.paa";
        name = "WS SFIA";
        file = "WS_AI_SFIA";
	};
	class WS_ION : WS_Base
	{
        side = "Inv";
        flagTexture = "\A3\Data_F\Flags\flag_ion_CO.paa";
        name = "WS ION";
        file = "WS_AI_ION";
	};
	class WS_ADF : WS_Base
	{
        side = "Occ";
        flagTexture = "\lxws\data_f_lxws\img\flags\flag_Argana_CO.paa";
        name = "WS ADF";
        file = "WS_AI_ADF";
	};
	class WS_TURA : WS_Base
	{
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "WS Tura";
        file = "WS_Reb_TURA";
	};
	class WS_Civ : WS_Base
	{
        side = "Civ";
        flagTexture = "\lxws\data_f_lxws\img\flags\flag_Argana_CO.paa";
        name = "Western Sahara";
        file = "WS_Civ";
	};
};
