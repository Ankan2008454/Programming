const chats = document.querySelectorAll('.profile-details');
const chatBox = document.querySelector('.main-chat');

let currentChat = null;

const msg = document.querySelector('.search-bar2');
const mic = document.querySelector('#send-mic');

const stickerButton = document.querySelector('.sticker-icon');
const emojiPicker = document.querySelector('.emoji-picker');

stickerButton.addEventListener('click', (event) => {

    event.stopPropagation();

    emojiPicker.classList.toggle('show');

});

emojiPicker.addEventListener('click', (event) => {

    event.stopPropagation();

});

const emojis = document.querySelectorAll('.emoji-picker button');

emojis.forEach((emoji) => {

    emoji.addEventListener('click', () => {

        msg.value += emoji.textContent;
        msg.focus();
        if (msg.value.trim() !== '') {
            mic.src = 'icons/send.svg';
        }

    });

});

document.addEventListener('click', () => {

    emojiPicker.classList.remove('show');

});

chats.forEach((chat) => {

    chat.addEventListener('click', () => {

        const user = chat.dataset.user;

        console.log(user);

        currentChat = user;

        const headerName = document.querySelector('.a');

        if (headerName) {
            headerName.textContent = user;
        }

        const profileImg = chat.querySelector('.img-real');
        const headerImg = document.querySelector('.img-gof');

        if (profileImg && headerImg) {
            headerImg.src = profileImg.src;
        }

        loadMessages();

    });

});

msg.addEventListener('input', () => {

    if (msg.value.trim() !== '') {

        mic.src = 'icons/send.svg';

    } else {

        mic.src = 'icons/mic.svg';

    }

});

function sendMessage() {

    const message = msg.value.trim();

    if (message === '') {
        return;
    }

    if (currentChat === null) {
        return;
    }

    const messages =
        JSON.parse(localStorage.getItem(currentChat)) || [];

    messages.push(message);

    localStorage.setItem(
        currentChat,
        JSON.stringify(messages)
    );

    chatBox.insertAdjacentHTML('beforeend', `
        <div class="t2">
            <p class="text">${message}</p>
        </div>
    `);

    msg.value = '';

    mic.src = 'icons/mic.svg';

}

mic.addEventListener('click', () => {

    sendMessage();

});

msg.addEventListener('keydown', (event) => {

    if (event.key === 'Enter') {

        event.preventDefault();

        sendMessage();

    }

});

function loadMessages() {

    chatBox.innerHTML = '';

    const messages =
        JSON.parse(localStorage.getItem(currentChat)) || [];

    messages.forEach((message) => {

        chatBox.insertAdjacentHTML('beforeend', `
            <div class="t2">
                <p class="text">${message}</p>
            </div>
        `);

    });

}