#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_GeometryCache {
struct GeometryCacheComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCache {
#pragma pack(push, 1)
struct GeometryCacheActor : public _Script_Engine::Actor {
    private: char pad_360[0x8]; public:
    _Script_GeometryCache::GeometryCacheComponent*& get_GeometryCacheComponent();
    static _Script_CoreUObject::Class* static_class();
    _Script_GeometryCache::GeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x368
#pragma pack(pop)
}
