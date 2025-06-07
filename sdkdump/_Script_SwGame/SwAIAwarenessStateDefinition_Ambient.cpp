#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIAwarenessStateDefinition_Ambient.hpp"
#include "SwAIAwarenessStateDefinition_Ambient.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAIAwarenessStateDefinition_Ambient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIAwarenessStateDefinition_Ambient");
    return result;
}
