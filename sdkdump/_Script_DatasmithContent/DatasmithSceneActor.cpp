#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithScene.hpp"
#include "DatasmithSceneActor.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_DatasmithContent::DatasmithScene*& _Script_DatasmithContent::DatasmithSceneActor::get_Scene() {
    return *(_Script_DatasmithContent::DatasmithScene**)((uintptr_t)this + 0x360);
}
void* _Script_DatasmithContent::DatasmithSceneActor::get_RelatedActors() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithSceneActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithSceneActor");
    return result;
}
