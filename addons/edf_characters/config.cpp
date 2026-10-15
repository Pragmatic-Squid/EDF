#define East       0
#define West       1
#define Guerrila   2
#define Civilian   3

#define private     0
#define protected   1
#define public      2

#define DefaultEquip Throw,Put
#define DefaultGrenades HandGrenade,HandGrenade,SmokeShell

// ---------------------------------------------------------------------------
// CfgPatches
// ---------------------------------------------------------------------------

class CfgPatches
{
    class EDF_Characters
    {
        units[] =
        {
            "EDF_TD_SoldierB",
			"EDF_TD_SoldierMedic",
			"EDF_TD_SoldierG",
			"EDF_TD_SoldierAR",
			"EDF_TD_SoldierAT",
			"EDF_TD_TeamLeader",
			"EDF_TD_SoldierCrew",
			"EDF_TD_Sniper",
			"EDF_TD_Marksman"
        };

        weapons[] = {};

        requiredVersion = 1.14;

        requiredAddons[] =
        {
			"CACharacters"
        };
    };
};

// ---------------------------------------------------------------------------
// Faction
// ---------------------------------------------------------------------------

class CfgFactionClasses
{
    class EDF
    {
        displayName = "Everon Defense Forces";
        side = West;
    };
};

// ---------------------------------------------------------------------------
// Editor vehicle classes
// ---------------------------------------------------------------------------

class CfgVehicleClasses
{
    class EDF_TerritorialDefense
    {
        displayName = "EDF Territorial Defense";
    };

    class EDF_Special_Forces
    {
        displayName = "EDF Special Forces";
    };
};

// ---------------------------------------------------------------------------
// Units
// ---------------------------------------------------------------------------

class CfgVehicles
{
    class SoldierWB;


    // -----------------------------------------------------------------------
    // Rifleman
    // -----------------------------------------------------------------------

    class EDF_TD_SoldierB : SoldierWB
    {
		scope = public;
		side = West;
		faction = "EDF";
		vehicleClass = "EDF_TerritorialDefense";
        
		picture="\Ca\characters\data\Ico\i_null_CA.paa";
		Icon= "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\edf_characters\edf_soldier_b.p3d";
		displayName = "EDF Rifleman";
		
		accuracy = 0.7;
		cost = 40000;
		
        weapons[] = {
            "AK74",
            DefaultEquip
        };

        magazines[] = {
            "30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			DefaultGrenades
        };
		
		respawnWeapons[] = {
            "AK74",
            DefaultEquip
		};
		
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK"
		};
		
		class Wounds
		{
			tex[]={};
			mat[]={
				"ca\characters\data\us_rukavy_hhl.rvmat",
				"ca\characters\data\us_rukavy_hhl_wound1.rvmat",
				"ca\characters\data\us_rukavy_hhl_wound2.rvmat",
				"ca\characters\data\us_soldier_b_body.rvmat",
				"ca\characters\data\us_soldier_b_body_wound1.rvmat",
				"ca\characters\data\us_soldier_b_body_wound2.rvmat"
			};
		};
    };
	
	class EDF_TD_SoldierG : EDF_TD_SoldierB {
		displayName = "EDF Grenadier";
		nameSound="grenadier";
		
		cost=60000;
		accuracy = 1000; // never recognized
		
		weapons[] = {
			"AK74GL",
			DefaultEquip
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25",
			DefaultGrenades
		};
		
		respawnWeapons[] = {
            "AK74GL",
            DefaultEquip
		};
		
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"1Rnd_HE_GP25",
			"1Rnd_HE_GP25"
		};
	};
	
	class EDF_TD_SoldierMedic : EDF_TD_SoldierB {
		displayName = "EDF Medic";
		nameSound = "medic2";
		model = "\edf_characters\edf_soldier_medic.p3d";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_medyk_CA.paa";
		
		accuracy=1000; // never recognized
		cost = 60000;
		attendant = true;
		weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + 8 * WeaponSlotItem + 2 * WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem;
				
		class Wounds
		{
			tex[]={};
			mat[]={
				"ca\characters\data\us_hhl.rvmat",
				"ca\characters\data\us_hhl_wound1.rvmat",
				"ca\characters\data\us_hhl_wound2.rvmat",
				"ca\characters\data\us_soldier_medic_body.rvmat",
				"ca\characters\data\us_soldier_medic_body_wound1.rvmat",
				"ca\characters\data\us_soldier_medic_body_wound2.rvmat"
			};
		};
	};
	
	class EDF_TD_SoldierAR: EDF_TD_SoldierB
	{
		displayName = "EDF Automatic Rifleman";
		nameSound = "machineGunner";
		
		accuracy = 1.5;
		cost = 60000;
		threat[] = {1, 0.1, 0.8};
		
		weapons[] = {
			"PK",
			DefaultEquip
		};
		
		magazines[] = {
			"100Rnd_762x54_PK",
			"100Rnd_762x54_PK",
			"100Rnd_762x54_PK",
			"100Rnd_762x54_PK",
			"HandGrenadeTimed",
			"HandGrenadeTimed"
		};
		
		respawnWeapons[] = {
			"PK",
			DefaultEquip
		};
		
		respawnMagazines[] = {
			"100Rnd_762x54_PK",
			"100Rnd_762x54_PK"
		};
		
		class Wounds
		{
			tex[]={};
			mat[]={
				"ca\characters\data\us_hhl.rvmat",
				"ca\characters\data\us_hhl_wound1.rvmat",
				"ca\characters\data\us_hhl_wound2.rvmat",
				"ca\characters\data\us_soldier_ar_body.rvmat",
				"ca\characters\data\us_soldier_ar_body_wound1.rvmat",
				"ca\characters\data\us_soldier_ar_body_wound2.rvmat"
			};
		};
	};
	
	class EDF_TD_SoldierAT: EDF_TD_SoldierB
	{
		displayName = "EDF AT Soldier";
		nameSound = "missileSoldier";
		
		accuracy=1.5;
		cost=150000;
		nightVision=true;
		threat[]={1, 0.9, 0.1};
		
		weapons[] = {
			"AK74",
			"RPG7V",
			DefaultEquip
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"PG7V",
			"PG7V",
			"PG7V",
			DefaultGrenades
		};
		
		respawnWeapons[] = {
			"AK74",
			"RPG7V",
			DefaultEquip
		};
		
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"PG7V"
		};
	};
	
	class EDF_TD_TeamLeader : EDF_TD_SoldierB {
		displayName = "EDF Team Leader";
		Picture= "\Ca\characters\data\Ico\i_tleader_CA.paa";
		Icon= "\Ca\characters\data\map_ico\i_lider_CA.paa";
		
		accuracy=2.0;
		cost=600000;
		nightVision=true;
		
		weapons[] = {
			"AK74",
			"Binocular",
			"NVGoggles",
			DefaultEquip
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			DefaultGrenades
		};
		
		respawnWeapons[] = {
			"AK74",
			"Binocular",
			"NVGoggles",
			DefaultEquip 
		};
	};
	
	class EDF_TD_Sniper : EDF_TD_SoldierB {
		displayName = "EDF Sniper";
		nameSound="sniper";
		
		Picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		
		accuracy = 3.5;
		nightVision = true;
		cost = 250000;
		sensitivity = 2;
		camouflage = 0.6;
		threat[] = {1, 0.1, 0.1};
		
		weapons[] = {
			"SVD",
			"Makarov",
			"Binocular",
			DefaultEquip
		};
			
		magazines[] = {
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov"
		};
		
		respawnWeapons[]={
			"SVD",
			DefaultEquip
		};
		
		respawnMagazines[] = {
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD",
			"10Rnd_762x54_SVD"
		};
	};
	
	class EDF_TD_Marksman : EDF_TD_SoldierB
	{
		displayName = "EDF Marksman";
		
		weapons[] = {
			"aks74pso",
			"MakarovSD",
			"NVGoggles",
			DefaultEquip
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"8Rnd_9x18_MakarovSD",
			"8Rnd_9x18_MakarovSD",
			"8Rnd_9x18_MakarovSD",
			"8Rnd_9x18_MakarovSD",
			DefaultGrenades
		};
		
		respawnWeapons[] = {
		"aks74pso",
		DefaultEquip
		};
		
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK"
		};
	};
	
	class EDF_TD_SoldierCrew: EDF_TD_SoldierB
	{
		displayName = "EDF Crew";
		nameSound = "crew";
		
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		
		accuracy = 1000; // never recognize
		

		weapons[] = {
			"AKS74U",
			"Makarov",
			"NVGoggles",
			DefaultEquip
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		
		respawnWeapons[] = {
			"Makarov",DefaultEquip
		};
		
		respawnMagazines[] = {
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov"
		};
};

class CfgGroups {
    class West {
        name = "BLUFOR";

        class EDF_TD {
            name = "EDF Territorial Defense";

            class EDF_TD_RifleSquad {
                name = "TD RifleSquad";

				class Unit0 {
					side = 1;
					vehicle = "EDF_TD_TeamLeader";
					rank = "SERGEANT";
					position[] = {0, 0, 0};
				};

				class Unit1 {
					side = 1;
					vehicle = "EDF_TD_SoldierB";
					rank = "PRIVATE";
					position[] = {5, -5, 0};
				};

				class Unit2 {
					side = 1;
					vehicle = "EDF_TD_SoldierG";
					rank = "PRIVATE";
					position[] = {-5, -5, 0};
				};

				class Unit3 {
					side = 1;
					vehicle = "EDF_TD_SoldierAR";
					rank = "CORPORAL";
					position[] = {10, -10, 0};
				};

				class Unit4 {
					side = 1;
					vehicle = "EDF_TD_SoldierB";
					rank = "PRIVATE";
					position[] = {-10, -10, 0};
				};

				class Unit5 {
					side = 1;
					vehicle = "EDF_TD_SoldierAT";
					rank = "PRIVATE";
					position[] = {15, -15, 0};
				};
            };
        };
    };
};