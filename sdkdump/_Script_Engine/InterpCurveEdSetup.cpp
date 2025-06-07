#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InterpCurveEdSetup.hpp"
void* _Script_Engine::InterpCurveEdSetup::get_Tabs() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::InterpCurveEdSetup::get_ActiveTab() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::InterpCurveEdSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpCurveEdSetup");
    return result;
}
