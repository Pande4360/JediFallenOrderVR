#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "SwMeditationTrainingArena.hpp"
#include "SwMeditationTrainingArenaLights.hpp"
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwMeditationTrainingArena::get_BlockingWallForward() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwMeditationTrainingArena::get_BlockingWallRight() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x378);
}
float& _Script_SwGame::SwMeditationTrainingArena::get_ArenaScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0x360);
}
float& _Script_SwGame::SwMeditationTrainingArena::get_ArenaPadding() {
    return *(float*)((uintptr_t)this + 0x364);
}
void* _Script_SwGame::SwMeditationTrainingArena::get_DefaultArenaSize() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwMeditationTrainingArena::get_ArenaRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwMeditationTrainingArena::get_BlockingWallLeft() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x380);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwMeditationTrainingArena::get_BlockingWallBackward() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x390);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwMeditationTrainingArena::get_BlockingCeiling() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x398);
}
void* _Script_SwGame::SwMeditationTrainingArena::get_ArenaLightsClass() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Script_SwGame::SwMeditationTrainingArenaLights*& _Script_SwGame::SwMeditationTrainingArena::get_ArenaLights() {
    return *(_Script_SwGame::SwMeditationTrainingArenaLights**)((uintptr_t)this + 0x3a8);
}
void* _Script_SwGame::SwMeditationTrainingArena::get_PreviousArenaCentre() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_SwGame::SwMeditationTrainingArena::get_PreviousArenaDimensions() {
    return (void*)((uintptr_t)this + 0x3bc);
}
void* _Script_SwGame::SwMeditationTrainingArena::get_CurrentArenaCentre() {
    return (void*)((uintptr_t)this + 0x3c4);
}
void* _Script_SwGame::SwMeditationTrainingArena::get_CurrentArenaDimensions() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingArena::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingArena");
    return result;
}
void _Script_SwGame::SwMeditationTrainingArena::SetArenaSizeImmediate(_Script_CoreUObject::Vector& ArenaCentre, _Script_CoreUObject::Vector2D& ArenaDimensions) {
    return;
}
void _Script_SwGame::SwMeditationTrainingArena::OnResizeArena(_Script_CoreUObject::Vector& ArenaCentre, _Script_CoreUObject::Vector2D& ArenaDimensions) {
    return;
}
