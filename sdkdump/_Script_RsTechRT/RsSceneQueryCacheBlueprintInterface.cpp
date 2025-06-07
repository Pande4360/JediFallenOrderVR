#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsSceneQueryCacheBlueprintInterface.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsSceneQueryCacheBlueprintInterface");
    return result;
}
void _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::DebugDraw(int32_t InDrawFlags) {
    return;
}
void _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::Uninitialize() {
    return;
}
void _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::OverlapSphere(float InRadius, _Script_CoreUObject::Vector InQueryPostion, void* InQueryChannel) {
    return;
}
void _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::OverlapCapsule(float InRadius, float InHalfHeight, _Script_CoreUObject::Vector InQueryPostion, _Script_CoreUObject::Rotator InQueryRotation, void* InQueryChannel) {
    return;
}
void _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::OverlapBox(_Script_CoreUObject::Vector InHalfExtents, _Script_CoreUObject::Vector InQueryPostion, _Script_CoreUObject::Rotator InQueryRotation, void* InQueryChannel) {
    return;
}
void _Script_RsTechRT::RsSceneQueryCacheBlueprintInterface::Initialize() {
    return;
}
