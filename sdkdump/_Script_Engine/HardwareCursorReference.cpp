#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HardwareCursorReference.hpp"
void* _Script_Engine::HardwareCursorReference::get_CursorPath() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::HardwareCursorReference::get_HotSpot() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::HardwareCursorReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HardwareCursorReference");
    return result;
}
