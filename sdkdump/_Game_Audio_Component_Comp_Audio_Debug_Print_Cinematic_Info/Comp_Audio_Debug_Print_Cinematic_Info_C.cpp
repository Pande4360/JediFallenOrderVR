#include "..\FUObjectArray.hpp"
#include "Comp_Audio_Debug_Print_Cinematic_Info_C.hpp"
#include "..\_Game_Audio_Widget_Widget_Audio_Cinematic_Debug\Widget_Audio_Cinematic_Debug_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_Tick() {
    return (void*)((uintptr_t)this + 0x188);
}
bool _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_TogglePrint() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
int32_t& _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_FrameCounter() {
    return *(int32_t*)((uintptr_t)this + 0x19c);
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::set_TogglePrint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C*& _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_Widget() {
    return *(_Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C**)((uintptr_t)this + 0x180);
}
int32_t& _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_FrameNumber() {
    return *(int32_t*)((uintptr_t)this + 0x198);
}
bool _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_IsCinematicActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a0 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::set_IsCinematicActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_Audio_Debug_Print_Cinematic_Info.Comp_Audio_Debug_Print_Cinematic_Info_C");
    return result;
}
float& _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_Time() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
void* _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::get_Resolutions() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::Start() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::End() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::Toggle() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::ExecuteUbergraph_Comp_Audio_Debug_Print_Cinematic_Info(int32_t EntryPoint) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C::Tick__DelegateSignature() {
    return;
}
