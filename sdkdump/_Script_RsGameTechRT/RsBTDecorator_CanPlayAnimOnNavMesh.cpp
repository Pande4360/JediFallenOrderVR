#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsBTDecorator_CanPlayAnimOnNavMesh.hpp"
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsBTDecorator_CanPlayAnimOnNavMesh::get_AnimationAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CanPlayAnimOnNavMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CanPlayAnimOnNavMesh");
    return result;
}
