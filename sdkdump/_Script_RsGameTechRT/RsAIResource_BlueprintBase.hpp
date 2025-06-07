#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIResource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsAIResourceProviderId;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIResource_BlueprintBase : public RsAIResource {
    private: char pad_108[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    bool ReceiveTryAcquireResource(_Script_CoreUObject::Object* Requester, _Script_RsGameTechRT::RsAIResourceProviderId& ProviderId);
    void ReceiveTick(float DeltaTime);
    void ReceiveStopPlay();
    void ReceiveStartPlay();
    void ReceiveResourceReleased(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsAIResourceProviderId& ProviderId);
    void ReceiveResourceAcquired(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsAIResourceProviderId& ProviderId);
}; // Size: 0x110
#pragma pack(pop)
}
