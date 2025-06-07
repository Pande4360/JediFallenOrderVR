#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KConvexElem.hpp"
#include "KShapeElem.hpp"
void* _Script_Engine::KConvexElem::get_VertexData() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::KConvexElem::get_ElemBox() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::KConvexElem::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::KConvexElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KConvexElem");
    return result;
}
