#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
#include "SwWorldMapIndicatorComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwWorldMapIndicatorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwWorldMapIndicatorComponent");
    return result;
}
void _Script_SwGame::SwWorldMapIndicatorComponent::UpdateIndicatorTransform(_Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation, bool bYawRotationOnly) {
    return;
}
