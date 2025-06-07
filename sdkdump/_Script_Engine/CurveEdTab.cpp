#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveEdTab.hpp"
void* _Script_Engine::CurveEdTab::get_Curves() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::CurveEdTab::get_TabName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CurveEdTab::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CurveEdTab");
    return result;
}
float& _Script_Engine::CurveEdTab::get_ViewStartInput() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::CurveEdTab::get_ViewEndInput() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::CurveEdTab::get_ViewStartOutput() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::CurveEdTab::get_ViewEndOutput() {
    return *(float*)((uintptr_t)this + 0x2c);
}
