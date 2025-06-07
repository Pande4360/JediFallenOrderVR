#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithActorTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
void* _Script_DatasmithContent::DatasmithActorTemplate::get_Layers() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_DatasmithContent::DatasmithActorTemplate::get_Tags() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithActorTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithActorTemplate");
    return result;
}
