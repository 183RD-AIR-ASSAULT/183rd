#include "script_component.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class rhsusf_stryker_base {
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 12;
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass        = 2500; // Max
                rhs_attachPoint            = ""; // Name of memory point where attach action & ropes will orignate from
                rhs_attachPointPos[]    = {0,-3.1,-1.2}; // If memory point is not present, model space coordinates can be provided instead
            };
        };
    };
};
