#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialRemapIndex.hpp"
void* _Script_Engine::MaterialRemapIndex::get_ImportVersionKey() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialRemapIndex::get_MaterialRemap() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialRemapIndex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialRemapIndex");
    return result;
}
