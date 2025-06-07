#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DecalComponent.hpp"
#include "PrimitiveComponent.hpp"
#include "PrimitiveMaterialRef.hpp"
_Script_Engine::PrimitiveComponent*& _Script_Engine::PrimitiveMaterialRef::get_Primitive() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x0);
}
_Script_Engine::DecalComponent*& _Script_Engine::PrimitiveMaterialRef::get_Decal() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::PrimitiveMaterialRef::get_ElementIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::PrimitiveMaterialRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimitiveMaterialRef");
    return result;
}
