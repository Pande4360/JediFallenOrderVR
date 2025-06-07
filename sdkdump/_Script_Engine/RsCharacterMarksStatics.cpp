#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "RsCharacterMarksManager.hpp"
#include "RsCharacterMarksStatics.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsCharacterMarksStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsCharacterMarksStatics");
    return result;
}
_Script_Engine::RsCharacterMarksManager* _Script_Engine::RsCharacterMarksStatics::GetCharacterMarksManager(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
