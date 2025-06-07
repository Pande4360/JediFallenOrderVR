#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceLegacyObjectReference.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceLegacyObjectReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceLegacyObjectReference");
    return result;
}
