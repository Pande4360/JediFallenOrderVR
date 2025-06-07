#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerState.hpp"
#include "SwPlayerState.hpp"
int32_t& _Script_SwGame::SwPlayerState::get_NumDeaths() {
    return *(int32_t*)((uintptr_t)this + 0x450);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPlayerState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPlayerState");
    return result;
}
int32_t _Script_SwGame::SwPlayerState::GetNumDeaths() {
    return;
}
