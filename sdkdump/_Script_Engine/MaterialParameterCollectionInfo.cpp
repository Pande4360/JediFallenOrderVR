#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialParameterCollection.hpp"
#include "MaterialParameterCollectionInfo.hpp"
void* _Script_Engine::MaterialParameterCollectionInfo::get_StateId() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialParameterCollection*& _Script_Engine::MaterialParameterCollectionInfo::get_ParameterCollection() {
    return *(_Script_Engine::MaterialParameterCollection**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialParameterCollectionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialParameterCollectionInfo");
    return result;
}
