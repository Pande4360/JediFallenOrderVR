#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\World.hpp"
#include "RsSurfaceEffectStatics.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSurfaceEffectStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSurfaceEffectStatics");
    return result;
}
void _Script_RsGameTechRT::RsSurfaceEffectStatics::AsyncLoadEffectAssets(_Script_Engine::World* World, _Script_Engine::DataTable* EffectTable) {
    return;
}
void _Script_RsGameTechRT::RsSurfaceEffectStatics::SpawnFootEffect(_Script_Engine::World* World, _Script_Engine::DataTable* FootEffectTable, void* SurfaceType, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Quat Orientation, void* Speed, bool bMirror) {
    return;
}
_Script_Engine::ParticleSystemComponent* _Script_RsGameTechRT::RsSurfaceEffectStatics::SpawnSurfaceEffectFromTable(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SceneComponent* AttachToComponent, void* AttachSocket, _Script_Engine::DataTable* EffectTable, void* SurfaceType, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Quat Orientation, float DecalPitch, bool bMirror, bool bAttachParticle) {
    return;
}
