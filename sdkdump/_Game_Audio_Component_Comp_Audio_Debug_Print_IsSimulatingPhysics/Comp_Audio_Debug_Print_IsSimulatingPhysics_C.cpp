#include "..\FUObjectArray.hpp"
#include "Comp_Audio_Debug_Print_IsSimulatingPhysics_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::ExecuteUbergraph_Comp_Audio_Debug_Print_IsSimulatingPhysics(int32_t EntryPoint) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void* _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::EnableTick() {
    return;
}
bool _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::get_Toggle_Object_Print() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::set_Toggle_Object_Print(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_Audio_Debug_Print_IsSimulatingPhysics.Comp_Audio_Debug_Print_IsSimulatingPhysics_C");
    return result;
}
