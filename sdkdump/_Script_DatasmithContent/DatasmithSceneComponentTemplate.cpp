#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithSceneComponentTemplate.hpp"
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_RelativeTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_Mobility() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_AttachParent() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithSceneComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithSceneComponentTemplate");
    return result;
}
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_Tags() {
    return (void*)((uintptr_t)this + 0x90);
}
