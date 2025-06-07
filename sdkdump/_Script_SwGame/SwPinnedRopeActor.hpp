#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct SwRopePinComponent;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_RsGameTechRT {
struct RsRopeActor;
}
namespace _Script_RsGameTechRT {
struct RsRopeAttachmentComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPinnedRopeActor : public _Script_Engine::Actor {
    private: char pad_360[0x68]; public:
    void* get_OnRopeParticleDetached();
    void* get_OnRopeCompletelyDetached();
    void* get_RopeClass();
    _Script_Engine::SceneComponent*& get_RopeSceneRoot();
    _Script_SwGame::SwRopePinComponent*& get_RopePin0();
    _Script_RsGameTechRT::RsRopeActor*& get_RopeActor();
    float& get_ForcePullDetachWaitTime();
    bool get_bDetachRopeOnForcePull();
    void set_bDetachRopeOnForcePull(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnRopeForcePullStart(_Script_RsGameTechRT::RsRopeComponent* Rope);
    void OnRopeForcePullEnd(_Script_RsGameTechRT::RsRopeComponent* Rope);
    void OnRopeAttached(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment);
    void DetachRope();
}; // Size: 0x3c8
#pragma pack(pop)
}
