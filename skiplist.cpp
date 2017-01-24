#include <string>
#include "skiplist.h"

template<typename K, typename V>
Node<K,V>::Node(int node_level):
    m_forward(node_level, nullptr),
    m_node_level(node_level)
{
}

template<typename K, typename V>
Node<K,V>::Node(K key, V value, int node_level):
    m_key(key), m_value(value),
    m_forward(node_level, nullptr),
    m_node_level(node_level)
{
}

template<typename K, typename V>
SkipList<K, V>::SkipList(int max_level):
    m_head(std::make_shared<SkipList<K, V>::NodeType>(max_level)),
    m_list_level(1),
    m_max_level(max_level)
{
}

template<typename K, typename V>
int SkipList<K, V>::insert()
{
    return 0;
}

template<typename K, typename V>
typename SkipList<K, V>::NodePtrType SkipList<K, V>::search(K key)
{
    SkipList<K, V>::NodePtrType x = m_head;

    for (int i = m_list_level; i > 0; --i)
    {

    }

    return nullptr;
}
