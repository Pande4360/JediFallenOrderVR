#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceObjectReferenceMap.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceObjectReferenceMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceObjectReferenceMap");
    return result;
}
