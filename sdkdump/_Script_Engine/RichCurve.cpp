#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IndexedCurve.hpp"
#include "RichCurve.hpp"
void* _Script_Engine::RichCurve::get_PreInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::RichCurve::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::RichCurve::get_PostInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x59);
}
void* _Script_Engine::RichCurve::get_Keys() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::RichCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RichCurve");
    return result;
}
