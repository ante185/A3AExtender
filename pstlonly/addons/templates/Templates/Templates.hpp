class Templates {
    class Vanilla_Base; //import Vanilla_Base from A3A to use with defining a new vanilla template

    class aa_pistols_only : Vanilla_Base
    {
        basepath = QPATHTOFOLDER(Templates\Custom); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "\A3\Data_F\Flags\Flag_green_CO.paa"; //path to an icon to be displayed in the selector
        name = "Pistols Only Start"; //the name shown in the selector
        file = "reb_pistol_only"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        climate[] = {}; //climate that the template is meant for
        logo = "\x\A3A\addons\core\Pictures\antistasi_logo_small.paa";
        equipFlags[] = {};
        priority = 10;
    };
};
