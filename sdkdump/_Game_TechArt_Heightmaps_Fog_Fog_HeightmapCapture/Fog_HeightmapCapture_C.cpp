#include "..\FUObjectArray.hpp"
#include "Fog_HeightmapCapture_C.hpp"
#include "..\_Game_TechArt_Heightmaps_HeightmapCapture\HeightmapCapture_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\Texture.hpp"
_Script_Engine::StaticMeshComponent*& _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_FogVolume() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c0);
}
_Script_CoreUObject::Class* _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/TechArt/Heightmaps/Fog/Fog_HeightmapCapture.Fog_HeightmapCapture_C");
    return result;
}
float& _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_FogOffset() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
float& _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_FogFade() {
    return *(float*)((uintptr_t)this + 0x3cc);
}
_Script_Engine::Texture*& _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_HeightmapTex() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x3f8);
}
float& _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_Fog_Density() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
void* _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_FogAlbedo() {
    return (void*)((uintptr_t)this + 0x3d4);
}
void* _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::get_FogEmissive() {
    return (void*)((uintptr_t)this + 0x3e4);
}
void _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture::Fog_HeightmapCapture_C::UserConstructionScript() {
    return;
}
