#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
#include "SwAIResource_Taunt.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAIResource_Taunt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIResource_Taunt");
    return result;
}
