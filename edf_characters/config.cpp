#define East       0
#define West       1
#define Guerrila   2
#define Civilian   3

#define private     0
#define protected   1
#define public      2

// ---------------------------------------------------------------------------
// CfgPatches
// ---------------------------------------------------------------------------

class CfgPatches
{
    class EDF_Characters
    {
        units[] =
        {
            "EDF_SoldierB",
			"EDF_SoldierMedic",
			"EDF_SoldierG",
			"EDF_SoldierAR",
			"EDF_SoldierBKobra"
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
            "Throw",
            "Put"
        };

        magazines[] = {
            "30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK"
        };
		
		respawnWeapons[] = {
            "AK74",
            "Throw",
            "Put"
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
			"Throw",
			"Put"
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
			"Throw",
			"Put"
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
			"Throw",
			"Put"
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
			"Throw",
			"Put"
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"PG7V",
			"PG7V",
			"PG7V"
		};
		
		respawnWeapons[] = {
			"AK74",
			"RPG7V",
			"Throw",
			"Put"
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
			"Throw",
			"Put"
		};
		
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};
		
		respawnWeapons[] = {
			"AK74",
			"Binocular",
			"NVGoggles",
			"Throw",
			"Put"
		};
	};
};