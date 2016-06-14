#pragma once
template<typename K, typename V>
class Node
{
	template<typename K, typename V>
	friend class TreeMap;
private:
	K m_key;
	V m_value;
	Node<K, V>* m_child[2];

public:
	Node<K, V>(K key, V value);
	Node<K, V>(K key, V value, Node<K, V>* left, Node<K, V>* right);
};

template <typename K, typename V>
Node<K, V>::Node(K key, V value)
{
	m_key = key;
	m_value = value;
}

template <typename K, typename V>
Node<K, V>::Node(K key, V value, Node<K, V>* left, Node<K, V>* right)
{
	m_key = key;
	m_value = value;
	m_child[0] = left;
	m_child[1] = right;
}