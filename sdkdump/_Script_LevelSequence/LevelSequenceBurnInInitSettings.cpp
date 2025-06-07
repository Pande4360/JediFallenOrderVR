#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelSequenceBurnInInitSettings.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceBurnInInitSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceBurnInInitSettings");
    return result;
}
