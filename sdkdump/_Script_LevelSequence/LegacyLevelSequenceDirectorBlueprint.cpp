#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Blueprint.hpp"
#include "LegacyLevelSequenceDirectorBlueprint.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LegacyLevelSequenceDirectorBlueprint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint");
    return result;
}
