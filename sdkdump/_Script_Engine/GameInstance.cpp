#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameInstance.hpp"
#include "OnlineSession.hpp"
#include "RsSaveGameManagerBase.hpp"
#include "RsSignificanceUtils.hpp"
void _Script_Engine::GameInstance::ReceiveInit() {
    return;
}
void* _Script_Engine::GameInstance::get_ReferencedObjects() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::GameInstance::get_LocalPlayers() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::RsSignificanceUtils*& _Script_Engine::GameInstance::get_SignificanceUtils() {
    return *(_Script_Engine::RsSignificanceUtils**)((uintptr_t)this + 0x88);
}
_Script_Engine::OnlineSession*& _Script_Engine::GameInstance::get_OnlineSession() {
    return *(_Script_Engine::OnlineSession**)((uintptr_t)this + 0x48);
}
_Script_Engine::RsSaveGameManagerBase*& _Script_Engine::GameInstance::get_SaveGameManager() {
    return *(_Script_Engine::RsSaveGameManagerBase**)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::GameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameInstance");
    return result;
}
void _Script_Engine::GameInstance::ReceiveShutdown() {
    return;
}
void _Script_Engine::GameInstance::HandleTravelError(void* FailureType) {
    return;
}
void _Script_Engine::GameInstance::HandleNetworkError(void* FailureType, bool bIsServer) {
    return;
}
void _Script_Engine::GameInstance::DebugRemovePlayer(int32_t ControllerId) {
    return;
}
void _Script_Engine::GameInstance::DebugCreatePlayer(int32_t ControllerId) {
    return;
}
