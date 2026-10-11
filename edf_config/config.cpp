#define East       0
#define West       1
#define TGuerrila   2
#define TCivilian   3

#define private     0
#define protected   1
#define public      2

// ---------------------------------------------------------------------------
// EDF common equipment
// ---------------------------------------------------------------------------

#define Mag_556 \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag"

// Common grenades/smoke. Throw/Put are listed as weapons below.
#define Mag_Grenades \
    "ACE_HandGrenade", \
    "ACE_HandGrenade", \
    "ACE_SmokeGrenade_White", \
    "ACE_SmokeGrenade_Red"

// Standard infantry magazines.
// ACE's PDM magazines are intentionally not included here: those are the
// ACE persistence/drop variants found in the reference list, not normal
// carried ammunition.
#define Mag_Infantry \
    Mag_556, \
    Mag_Grenades, \
    "ACE_Bandage", \
    "ACE_Bandage"

#define Mag_Medic \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Morphine", \
    "ACE_Morphine", \
    "ACE_Morphine", \
    "ACE_Epinephrine", \
    "ACE_Epinephrine"


// ---------------------------------------------------------------------------
// CfgPatches
// ---------------------------------------------------------------------------

class CfgPatches
{
    class EDF_Core
    {
        units[] =
        {
            "EDF_SoldierB"
        };

        weapons[] = {};

        requiredVersion = 1.00;

        requiredAddons[] =
        {
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
        side = TWest;
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

    class EDF_SoldierB : SoldierWB
    {
		scope = public;
		side = West;
		faction = "EDF";
		vehicleClass = "EDF_TerritorialDefense";
        
        model = "\edf_characters\edf_soldier_b.p3d";
		displayName = "EDF Rifleman";
		
        weapons[] =
        {
            "AKS74UN",
            "Binocular",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            "30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK"
        };
    };
};
