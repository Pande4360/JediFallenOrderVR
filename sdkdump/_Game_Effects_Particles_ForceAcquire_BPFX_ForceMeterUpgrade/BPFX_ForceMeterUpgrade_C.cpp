#include "..\FUObjectArray.hpp"
#include "BPFX_ForceMeterUpgrade_C.hpp"
#include "..\_Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base\BPFX_MeterUpgrade_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Effects_Particles_ForceAcquire_BPFX_ForceMeterUpgrade::BPFX_ForceMeterUpgrade_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Particles/ForceAcquire/BPFX_ForceMeterUpgrade.BPFX_ForceMeterUpgrade_C");
    return result;
}
