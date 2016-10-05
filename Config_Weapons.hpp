/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "**", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
			{ "smg_05_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
            { "9Rnd_45ACP_Mag", "", 100 },
            { "30Rnd_9x21_Mag", "", 350 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "", 70000 , 10000 },
            { "arifle_TRG20_F", "", 80000, 10000 },
            { "arifle_Katiba_F", "", 100000 , 20000 },
            { "arifle_Katiba_C_F", "", 100000, 20000 },
            { "srifle_DMR_01_F", "", 200000,50000 },
            { "arifle_Mk20_plain_F", "", 75000,30000 },
			{ "arifle_Mk20C_F", "", 75000,25000 },
			{ "arifle_AKS_F", "", 110000,40000 },
			{ "srifle_EBR_F", "", 185000, 50000 },
			{ "arifle_ARX_blk_F", "", 275000, 50000 },
			{ "arifle_ARX_ghex_F", "", 275000, 50000 },
			{ "srifle_DMR_06_olive_F", "", 300000, 50000 },
			{ "srifle_DMR_03_F", "", 300000, 50000 },
			{ "srifle_DMR_03_multicam_F", "", 300000, 50000 },
			{ "srifle_DMR_03_woodland_F", "", 300000, 50000 },
			{ "arifle_AKM_F", "", 160000,50000 },
			{ "arifle_AK12_F", "", 175000,50000 },
			{ "Rangefinder", "", 3000,0 },
			{ "optic_Arco", "", 7000,4000 },
			{ "optic_Hamr", "", 7000,4000 },
			{ "optic_LRPS", "", 20000,4000 },
			{ "optic_ERCO_blk_F", "", 7000, 2600 },
			{ "optic_ERCO_khk_F", "", 7500, 3000},
			{ "optic_ERCO_snd_F", "", 7500, 3000 },
			{ "optic_DMS", "", 10000, 5000 },
			{ "optic_AMS_snd", "", 20000, 10000 },
			{ "optic_AMS_khk", "", 20000, 10000 },
			{ "optic_AMS", "", 20000, 10000 },
			{ "optic_ACO_grn", "", 3500, 1200 },
			{ "optic_MRCO", "", 5000,2500 },
            { "optic_Holosight", "", 3600, 1500 },
            { "acc_flashlight", "", 1000, 200 },
            { "muzzle_snds_H", "", 17000, 13000 },
			{ "muzzle_snds_B", "", 20000, 16000 },
			{ "muzzle_snds_M", "", 11000, 7000 },
			{ "bipod_01_F_snd", "", 7500, 5000 },
			{ "bipod_01_F_blk", "", 7500, 5000}
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 200, 100 },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 125 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 500 },
			{ "20Rnd_762x51_Mag", "", 3500 },
			{ "30Rnd_762x39_Mag_F", "", 1000 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2500 },
			{ "10Rnd_762x51_Mag", "", 3500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
  			{ "SMG_02_F", "", 15000, 7500 },
			{ "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 },
			{ "optic_MRCO", "", 1000, 500 }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop1 {
        name = "Cadet Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", -1, "You must be a PCSO to access this shop" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 0,0 },
			{ "hgun_P07_F", "", 0,0 },
			{ "SMG_02_F", "", 0,0 },
			{ "SMG_05_F", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "Rangefinder", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0 },
			{ "NVGoggles", "", 0,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "optic_Arco", "", 0,0 },
			{ "acc_flashlight", "", 0,0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0,0 }
        };
    };
	class cop2 {
        name = "Trooper Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 2, "You must be a PC to access this shop" };
        items[] = {
			{ "hgun_P07_snds_F", "Stun Pistol", 4000,0 },
			{ "hgun_P07_F", "", 4000,0 },
			{ "SMG_02_F", "", 4000,0 },
			{ "SMG_05_F", "", 4000,0 },
			{ "arifle_SPAR_01_blk_F", "", 4000,0 },
			{ "Binocular", "", 1000,0 },
			{ "Rangefinder", "", 2000,0 },
			{ "ItemGPS", "", 4000,0 },
			{ "ToolKit", "", 4000,0 },
			{ "FirstAidKit", "", 4000,0 },
			{ "Medikit", "", 4000,0 },
			{ "NVGoggles", "", 1000,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0 },
			{ "optic_Aco", "", 0,0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 }
        };
    };
	class cop3 {
        name = "Master Trooper Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 3, "You must be a SPC to access this shop" };
        items[] = {

			{ "hgun_P07_snds_F", "Stun Pistol", 0,0 },
			{ "hgun_P07_F", "", 0,0 },
			{ "SMG_02_F", "", 4000,0 },
			{ "SMG_05_F", "", 4000,0 },
			{ "arifle_SPAR_01_blk_F", "", 4000,0 },
			{ "arifle_SPAR_02_blk_F", "", 4000,0},
			{ "arifle_MXC_F", "", 4000,0 },
			{ "Rangefinder", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0 },
			{ "NVGoggles", "", 0,0},
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "optic_Arco", "", 0,0 },
			{ "acc_flashlight", "", 0,0 },
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0},
			{ "muzzle_snds_H", "", 0,0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 },
			{ "30Rnd_65x39_caseless_mag", "", 0,0 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 0,0 }
        };
    };
	class cop4 {
        name = "Corporal Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 4, "You must be a Seargent or higher to access this shop" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 0,0 },
			{ "hgun_P07_F", "", 0,0 },
			{ "SMG_02_F", "", 0,0 },
			{ "SMG_05_F", "", 0,0 },
			{ "SMG_01_Holo_pointer_snds_F", "", 0,0 },
			{ "arifle_SPAR_01_blk_F", "", 0,0 },
			{ "arifle_MXC_F", "", 50000,0 },
			{ "arifle_MX_F", "", 50000,0 },
			{ "arifle_MXM_F", "", 4000,0 },
			{ "Rangefinder", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0},
			{ "NVGoggles", "", 0,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "optic_Arco", "", 0,0},
			{ "optic_MRCO", "", 0,0},
			{ "optic_ERCO_blk_F", "", 0,0 },
			{ "acc_flashlight", "", 0,0},
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0 },
			{ "muzzle_snds_H", "", 0,0},
			{ "bipod_01_F_snd", "", 0,0 },
			{ "bipod_01_F_blk", "", 0,0 }
        };
        mags[] = {
			{ "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 },
			{ "30Rnd_65x39_caseless_mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0,0 }
        };
    };
	class cop5 {
        name = "Sergeant Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 5, "You must be a Staff Sergeant or higher to access this shop" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 0,0 },
			{ "hgun_P07_F", "", 0,0 },
			{ "SMG_02_F", "", 0,0 },
			{ "SMG_05_F", "", 0,0 },
			{ "SMG_01_Holo_pointer_snds_F", "", 0,0 },
			{ "arifle_SPAR_01_blk_F", "", 0,0 },
			{ "arifle_MXC_F", "", 50000,0 },
			{ "arifle_MX_F", "", 50000,0 },
			{ "arifle_MXM_F", "", 65000,0 },
			{ "arifle_MX_SW_F", "", 75000,0 },
			{ "Rangefinder", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0},
			{ "NVGoggles", "", 0,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "optic_Arco", "", 0,0},
			{ "optic_MRCO", "", 0,0},
			{ "optic_ERCO_blk_F", "", 0,0 },
			{ "acc_flashlight", "", 0,0},
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0 },
			{ "muzzle_snds_H", "", 0,0},
			{ "bipod_01_F_snd", "", 0,0 },
			{ "bipod_01_F_blk", "", 0,0 },
			{ "HandGrenade_Stone", "Flashbang", 0,0 }
        };
        mags[] = {
			{ "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 },
			{ "30Rnd_65x39_caseless_mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "100Rnd_65x39_caseless_mag", "", 0,0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0,0 }
        };
    };
	class cop6 {
        name = "Lieutenant Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 6, "You must be a Captain or higher to access this shop" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 0,0 },
			{ "hgun_P07_F", "", 0,0},
			{ "SMG_02_F", "", 0,0},
			{ "SMG_05_F", "", 0,0 },
			{ "SMG_01_Holo_pointer_snds_F", "", 0,0},
			{ "arifle_SPAR_01_blk_F", "", 0, 0},
			{ "arifle_MXC_F", "", 50000,0},
			{ "arifle_MX_F", "", 50000,0},
			{ "arifle_MXM_F", "", 65000, 0},
			{ "arifle_MX_SW_F", "", 75000,0 },
			{ "Rangefinder", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0 },
			{ "NVGoggles", "", 0,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "optic_Arco", "", 0,0 },
			{ "optic_ERCO_blk_F", "", 0,0},
			{ "optic_MRCO", "", 0,0},
			{ "optic_AMS", "", 0,0},
			{ "acc_flashlight", "", 0,0},
			{ "bipod_01_F_snd", "", 0,0},
			{ "bipod_01_F_blk", "", 0,0},
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0},
			{ "muzzle_snds_H", "", 0,0},
			{ "HandGrenade_Stone", "Flashbang", 0,0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "100Rnd_65x39_caseless_mag", "", 0,0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 0,0 },			
			{ "30Rnd_65x39_caseless_mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0,0 }
        };
    };
	class cop7 {
        name = "Captain Weapon Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 7, "You must be a SCO19 member to access this shop" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 0,0 },
			{ "hgun_P07_F", "", 0,0 },
			{ "SMG_02_F", "", 0,0 },
			{ "SMG_05_F", "", 0,0 },
			{ "SMG_01_Holo_pointer_snds_F", "", 0,0 },
			{ "arifle_SPAR_01_blk_F", "", 0,0 },
			{ "arifle_MXC_F", "", 50000,0 },
			{ "arifle_MX_F", "", 50000,0 },
			{ "arifle_MXM_F", "", 65000,0 },
			{ "arifle_MX_SW_F", "", 75000,0 },
			{ "arifle_MX_SW_Black_F", "", 75000,0},
			{ "arifle_MXM_Black_F", "", 65000,0 },
			{ "arifle_ARX_blk_F", "", 80000,0 },
			{ "arifle_ARX_ghex_F", "", 80000,0 },
			{ "srifle_DMR_06_camo_F", "", 90000,0 },
			{ "srifle_DMR_03_F", "", 90000,0 },
			{ "srifle_EBR_F", "", 90000,0 },
			{ "arifle_SPAR_03_blk_F", "", 90000,0 },
			{ "Rangefinder", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0 },
			{ "NVGoggles", "", 0,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "muzzle_snds_H_MG", "", 0,0},
			{ "optic_Arco", "", 0,0},
			{ "optic_Hamr", "", 0,0},
			{ "optic_ERCO_blk_F", "", 0,0 },
			{ "optic_MRCO", "", 0,0 },
			{ "optic_LRPS", "", 0,0 },
			{ "optic_AMS", "", 0,0 },
			{ "acc_flashlight", "", 0,0 },
			{ "bipod_01_F_snd", "", 0,0 },
			{ "bipod_01_F_blk", "", 0,0 },
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0 },
			{ "muzzle_snds_H", "", 0,0 },
			{ "muzzle_snds_B", "", 0,0},
			{ "muzzle_snds_338_black", "", 0,0 },
			{ "HandGrenade_Stone", "Flashbang", 0,0 }
        };
        mags[] = {
			{ "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "20Rnd_762x51_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_65x39_caseless_green", "",0,0 },
			{ "100Rnd_65x39_caseless_mag", "", 0,0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 0,0 },			
			{ "30Rnd_65x39_caseless_mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0,0 },
			{ "10Rnd_338_Mag", "", 0,0 }
        };
    };
	   class cop8 {
        name = "Impound Lot Shop";
        side = "cop";
        license = "";
		level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant to access this shop" };
        items[] = {
            { "DemoCharge_Remote_Mag", "Explosive Charge", 2000,0 },
			{ "SatchelCharge_Remote_Mag", "Explosive Satchel", 2000,0 },
			{ "IEDUrbanBig_Remote_Mag", "Large IED", 2000,0 },
        };
    };
	
	class Donator {
        name = "Donator Shop";
        side = "civ";
        license = "Donator";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "", 70000 , 10000 },
            { "arifle_TRG20_F", "", 80000, 10000 },
            { "arifle_Katiba_F", "", 100000 , 20000 },
            { "srifle_DMR_01_F", "", 200000,50000 },
            { "arifle_Mk20_plain_F", "", 75000,30000 },
			{ "arifle_Mk20C_F", "", 75000,25000 },
			{ "arifle_AKS_F", "", 110000,40000 },
			{ "srifle_EBR_F", "", 185000, 50000 },
			{ "srifle_DMR_06_olive_F", "", 300000, 50000 },
			{ "arifle_AKM_F", "", 160000,50000 },
			{ "Rangefinder", "", 3000,0 },
			{ "optic_Arco", "", 7000,4000 },
			{ "optic_ERCO_blk_F", "", 7000, 2600 },
			{ "optic_ERCO_khk_F", "", 7500, 3000},
			{ "optic_ERCO_snd_F", "", 7500, 3000 },
			{ "optic_DMS", "", 10000, 5000 },
			{ "optic_AMS_snd", "", 20000, 10000 },
			{ "optic_AMS_khk", "", 20000, 10000 },
			{ "optic_AMS", "", 20000, 10000 },
			{ "optic_ACO_grn", "", 3500, 1200 },
			{ "optic_MRCO", "", 5000,2500 },
            { "optic_Holosight", "", 3600, 1500 },
            { "acc_flashlight", "", 1000, 200 },
            { "muzzle_snds_H", "", 17000, 13000 },
			{ "muzzle_snds_B", "", 20000, 16000 },
			{ "muzzle_snds_M", "", 11000, 7000 },
			{ "bipod_01_F_snd", "", 7500, 5000 },
			{ "bipod_01_F_blk", "", 7500, 5000},
			{ "hgun_P07_F", "", 0,0 },
			{ "SMG_02_F", "", 0,0 },
			{ "SMG_05_F", "", 0,0 },
			{ "SMG_01_Holo_pointer_snds_F", "", 0,0 },
			{ "arifle_SPAR_01_blk_F", "", 0,0 },
			{ "arifle_ARX_blk_F", "", 80000,0 },
			{ "arifle_ARX_ghex_F", "", 80000,0 },
			{ "srifle_DMR_06_camo_F", "", 90000,0 },
			{ "srifle_EBR_F", "", 90000,0 },
			{ "arifle_SPAR_03_blk_F", "", 90000,0 },
			{ "Rangefinder", "", 0,0 },
			{ "Binocular", "", 0,0 },
			{ "ItemGPS", "", 0,0 },
			{ "ToolKit", "", 0,0 },
			{ "FirstAidKit", "", 0,0 },
			{ "Medikit", "", 0,0 },
			{ "NVGoggles", "", 0,0 },
			{ "NVGoggles_OPFOR", "", 0,0 },
			{ "muzzle_snds_H_MG", "", 0,0},
			{ "optic_Arco", "", 0,0},
			{ "optic_Hamr", "", 0,0},
			{ "optic_ERCO_blk_F", "", 0,0 },
			{ "optic_MRCO", "", 0,0 },
			{ "optic_LRPS", "", 0,0 },
			{ "optic_AMS", "", 0,0 },
			{ "acc_flashlight", "", 0,0 },
			{ "bipod_01_F_snd", "", 0,0 },
			{ "bipod_01_F_blk", "", 0,0 },
			{ "muzzle_snds_M", "", 0,0},
			{ "muzzle_snds_L", "", 0,0 },
			{ "muzzle_snds_H", "", 0,0 },
			{ "muzzle_snds_B", "", 0,0},
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 200, 100 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
			{ "20Rnd_762x51_Mag", "", 3500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2500 },
			{ "10Rnd_762x51_Mag", "", 3500 },
			{ "16Rnd_9x21_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },
			{ "20Rnd_762x51_Mag", "", 0,0 },
			{ "30Rnd_9x21_Mag", "", 0,0 },			
			{ "30Rnd_65x39_caseless_mag", "", 0,0 },
			{ "30Rnd_556x45_Stanag", "", 0,0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0,0 },
        };    
	};	
		//Medic Shops
		
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "life_coplevel", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};

