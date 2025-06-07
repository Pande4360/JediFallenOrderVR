#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaintedVertex.hpp"
void* _Script_Engine::PaintedVertex::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PaintedVertex::get_Normal() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::PaintedVertex::get_Color() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::PaintedVertex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PaintedVertex");
    return result;
}
