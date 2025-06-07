#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacterDefinition.hpp"
#include "SwAICharacterDefinition.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAICharacterDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAICharacterDefinition");
    return result;
}
