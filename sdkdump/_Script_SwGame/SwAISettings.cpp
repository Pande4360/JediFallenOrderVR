#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAISettings.hpp"
#include "SwAISettings.hpp"
int32_t& _Script_SwGame::SwAISettings::get_PlayerFightPoints() {
    return *(int32_t*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAISettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAISettings");
    return result;
}
