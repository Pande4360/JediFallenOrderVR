#include "..\FUObjectArray.hpp"
#include "HeightmapCapture_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\SceneCaptureComponent2D.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_ScaleRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::BoxComponent*& _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x360);
}
void* _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_M2() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Script_Engine::SceneCaptureComponent2D*& _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_SceneCaptureComponent2D() {
    return *(_Script_Engine::SceneCaptureComponent2D**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
void* _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_M0() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_M1() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::get_M3() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_CoreUObject::Class* _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/TechArt/Heightmaps/HeightmapCapture.HeightmapCapture_C");
    return result;
}
void _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::UserConstructionScript0() {
    return;
}
void _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C::SetMaterialParameters(_Script_Engine::MaterialInstanceDynamic* NewParam) {
    return;
}
