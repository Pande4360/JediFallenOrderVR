#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameViewportClient.hpp"
#include "LocalPlayer.hpp"
#include "Player.hpp"
_Script_Engine::GameViewportClient*& _Script_Engine::LocalPlayer::get_ViewportClient() {
    return *(_Script_Engine::GameViewportClient**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::LocalPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LocalPlayer");
    return result;
}
void* _Script_Engine::LocalPlayer::get_AspectRatioAxisConstraint() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_Engine::LocalPlayer::get_PendingLevelPlayerControllerClass() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::LocalPlayer::get_bSentSplitJoin() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Engine::LocalPlayer::set_bSentSplitJoin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::LocalPlayer::get_ControllerId() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
