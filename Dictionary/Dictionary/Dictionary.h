#pragma once

template<typename TKey, typename TValue>
struct Item 
{
	TKey;
	TValue;
};

template<typename TKey, typename TValue>
class Dictionary 
{
public:
	Dictionary<TKey, TValue>();
	Dictionary<TKey, TValue>(Dictionary<TKey, TValue>& other);
	~Dictionary<TKey, TValue>();
	void clear()const;
	bool containsKey(const TKey object)const;
	bool containsValue(const TValue object)const;
	bool tryGetValue(const TKey key, const TValue& value)const;
	void addItem(const TKey& key, const TValue& value);
	bool remove(const TKey key);
	bool remove(const TKey key, TValue& value);
	int getCount()const;
	operator =(const Dictionary<Tkey, TValue> other) { const Dictionary<TKey, TValue>& };
private:
	Item<TKey, TValue>* m_items = nullptr;
	int m_count = 0;
};

template<typename TKey, typename TValue>
inline Dictionary<TKey, TValue>::Dictionary()
{

}

template<typename TKey, typename TValue>
inline Dictionary<TKey, TValue>::Dictionary(Dictionary<TKey, TValue>& other)
{

}

template<typename TKey, typename TValue>
inline Dictionary<TKey, TValue>::~Dictionary()
{

}

template<typename TKey, typename TValue>
inline void Dictionary<TKey, TValue>::clear() const
{

}

template<typename TKey, typename TValue>
inline bool Dictionary<TKey, TValue>::containsKey(const TKey object) const
{
	return false;
}

template<typename TKey, typename TValue>
inline bool Dictionary<TKey, TValue>::containsValue(const TValue object) const
{
	return false;
}

template<typename TKey, typename TValue>
inline bool Dictionary<TKey, TValue>::tryGetValue(const TKey key, const TValue& value) const
{
	return false;
}

template<typename TKey, typename TValue>
inline void Dictionary<TKey, TValue>::addItem(const TKey& key, const TValue& value)
{

}

template<typename TKey, typename TValue>
inline bool Dictionary<TKey, TValue>::remove(const TKey key)
{
	return false;
}

template<typename TKey, typename TValue>
inline bool Dictionary<TKey, TValue>::remove(const TKey key, TValue& value)
{
	return false;
}

template<typename TKey, typename TValue>
inline int Dictionary<TKey, TValue>::getCount() const
{
	return 0;
}
