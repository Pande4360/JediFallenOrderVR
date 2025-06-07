#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DPICustomScalingRule.hpp"
#include "DeveloperSettings.hpp"
#include "UserInterfaceSettings.hpp"
void* _Script_Engine::UserInterfaceSettings::get_HardwareCursors() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::UserInterfaceSettings::get_RenderFocusRule() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::UserInterfaceSettings::get_SoftwareCursors() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::UserInterfaceSettings::get_DefaultCursor() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::UserInterfaceSettings::get_TextEditBeamCursor() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::UserInterfaceSettings::get_CrosshairsCursor() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::UserInterfaceSettings::get_HandCursor() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::UserInterfaceSettings::get_GrabHandCursor() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::UserInterfaceSettings::get_GrabHandClosedCursor() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::UserInterfaceSettings::get_SlashedCircleCursor() {
    return (void*)((uintptr_t)this + 0x170);
}
float& _Script_Engine::UserInterfaceSettings::get_ApplicationScale() {
    return *(float*)((uintptr_t)this + 0x188);
}
void* _Script_Engine::UserInterfaceSettings::get_UIScaleRule() {
    return (void*)((uintptr_t)this + 0x18c);
}
void* _Script_Engine::UserInterfaceSettings::get_CustomScalingRuleClass() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::UserInterfaceSettings::get_UIScaleCurve() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_Engine::UserInterfaceSettings::get_bAllowHighDPIInGameMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_Engine::UserInterfaceSettings::set_bAllowHighDPIInGameMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::UserInterfaceSettings::get_bLoadWidgetsOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x221 + 0)) & 1 != 0;
}
void _Script_Engine::UserInterfaceSettings::set_bLoadWidgetsOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x221 + 0);
    *(uint8_t*)((uintptr_t)this + 0x221 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::UserInterfaceSettings::get_CursorClasses() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_Engine::UserInterfaceSettings::get_CustomScalingRuleClassInstance() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_Engine::DPICustomScalingRule*& _Script_Engine::UserInterfaceSettings::get_CustomScalingRule() {
    return *(_Script_Engine::DPICustomScalingRule**)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Class* _Script_Engine::UserInterfaceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.UserInterfaceSettings");
    return result;
}
