#include "..\FUObjectArray.hpp"
#include "AISenseBlueprintListener.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\UserDefinedStruct.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AISenseBlueprintListener::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseBlueprintListener");
    return result;
}
