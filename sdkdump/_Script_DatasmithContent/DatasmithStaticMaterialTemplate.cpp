#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithStaticMaterialTemplate.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
void* _Script_DatasmithContent::DatasmithStaticMaterialTemplate::get_MaterialSlotName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialInterface*& _Script_DatasmithContent::DatasmithStaticMaterialTemplate::get_MaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMaterialTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithStaticMaterialTemplate");
    return result;
}
