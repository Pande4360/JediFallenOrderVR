#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSurfaceEffectStatics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::ParticleSystemComponent* SpawnSurfaceEffectFromTable(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SceneComponent* AttachToComponent, void* AttachSocket, _Script_Engine::DataTable* EffectTable, void* SurfaceType, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Quat Orientation, float DecalPitch, bool bMirror, bool bAttachParticle);
    void SpawnFootEffect(_Script_Engine::World* World, _Script_Engine::DataTable* FootEffectTable, void* SurfaceType, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Quat Orientation, void* Speed, bool bMirror);
    void AsyncLoadEffectAssets(_Script_Engine::World* World, _Script_Engine::DataTable* EffectTable);
}; // Size: 0x28
#pragma pack(pop)
}
